import sys
import socket
from datetime import datetime
from unittest import result

# Define the target
if len(sys.argv) == 2:
    target = socket.gethostbyname(sys.argv[1]) # Translating hostname to IPv4
else:
    print("Invalid command.")
    print("Usage: python3 simple-port-scanner.py <target>")

print("-" * 69)
print("Scanning target " + target)
start = datetime.now()
print("Time started: " + str(start))

try:
    for port in range(50,85):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) # INET = IPv4, SOCK_STREAM = port
        socket.setdefaulttimeout(1)
        result = s.connect_ex((target, port)) # Returns an error indicator (0 = open, 1 = not open)
        if result == 0:
            print(f"Port {port} is open")
        s.close()

except KeyboardInterrupt:
    print("\nExiting program.")
    sys.exit()

except socket.gaierror:
    print("Hostname could not be resolved.")

except socket.error:
    print("Couldn't connect to server.")

end = datetime.now()
print("Time ended: " + str(end))
print("Time elapsed: " + str(end - start))
print("-" * 69)