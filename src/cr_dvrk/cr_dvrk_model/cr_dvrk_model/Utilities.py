import numpy as np
import json
import re
import scipy as sp


def format_matrix(matrix, format_spec="6.4f"):
    for row in matrix:
        formatted_row = [format(x, format_spec) for x in row]
        print(' '.join(formatted_row))

def compute_singular_values(J):
    A = J@J.T
    A = (A + A.T) / 2  # Ensure symmetry
    sigma = np.real(np.sqrt(sp.linalg.eigvals(A)))
    return sigma 

def compute_manipulability_grad(J_func, Js2b_func, q):
    pass 

def compute_manipulability_grad_fd(J_func,q,geometric_param):
    """
    Computes the manipulability gradient using finite differences.
    :param q: Joint configuration
    :param J: Jacobian matrix
    :return: Manipulability gradient
    """
    delta = 5e-4
    n = len(q)
    J_grad_fd = np.zeros((n,1))

    for i in range(n):

        q_plus = np.copy(q)
        q_plus[i] += delta
        J_plus,*_ = J_func(q_plus,geometric_param,isplanar=True,isbody=True) # in body frame 
        mu_plus = compute_manipulability_index(J_plus[3:6,2:]) # linear part only of the CR instr.

        q_minus = np.copy(q)
        q_minus[i] -= delta
        J_minus,*_ = J_func(q_minus,geometric_param,isplanar=True,isbody=True)
        mu_minus = compute_manipulability_index(J_minus[3:6,2:]) # linear part only of the CR instr.

        J_grad_fd[i] = (mu_plus - mu_minus) / (2 * delta) 

    return J_grad_fd.ravel()

def compute_manipulability_index(J):
    mu = np.sqrt(np.linalg.det(J@J.T))
    return mu

def rotx(theta):
    """Returns a 3x3 rotation matrix around the x-axis. Expects angle in radians."""
    c, s = np.cos(theta), np.sin(theta)
    return np.array([[1,  0,  0],
                     [0,  c, -s],
                     [0,  s,  c]])
def roty(theta):
    """Returns a 3x3 rotation matrix around the y-axis. Expects angle in radians."""
    c, s = np.cos(theta), np.sin(theta)
    return np.array([[ c, 0, s],
                     [ 0, 1, 0],
                     [-s, 0, c]])
def rotz(theta):
    """Returns a 3x3 rotation matrix around the z-axis. Expects angle in radians."""
    c, s = np.cos(theta), np.sin(theta)
    return np.array([[c, -s, 0],
                     [s,  c, 0],
                     [0,  0, 1]])

def remove_json_comments(json_string):
    """Removes comments from a JSON string."""
    json_string = re.sub(r'//.*', '', json_string)  # Remove single-line comments
    json_string = re.sub(r'/\*.*?\*/', '', json_string, flags=re.DOTALL)  # Remove multi-line comments
    return json_string

def parse_dh_json(file_path):
    with open(file_path, 'r') as file:
        json_content = file.read()
        cleaned_json = remove_json_comments(json_content)
        data = json.loads(cleaned_json)
    
    joints_dict = {}
    
    for joint in data["DH"]["joints"]:
        joints_dict[joint["name"]] = {
            "alpha": joint["alpha"],
            "A": joint["A"],
            "theta": joint["theta"],
            "D": joint["D"],
            "type": joint["type"],
            "mode": joint["mode"],
            "offset": joint["offset"],
            "min": joint["min"],
            "max": joint["max"],
            "ftmax": joint["ftmax"],
            "unit": joint["unit"],
        }
     
    
    return joints_dict

