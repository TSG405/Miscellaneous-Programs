'''
Coded by TSG, 2020
'''


import socket
hostname = socket.gethostname()
ip_address = socket.gethostbyname(hostname)
print(f" HOSTNAME : {hostname}")
print(f" IP ADDRESS : {ip_address}")
