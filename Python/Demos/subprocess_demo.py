#see subprocess documentation: https://docs.python.org/3/library/subprocess.html

import subprocess as sp 
import time 

cmd = ['python3', 'hullo.py', '42']

# proc = sp.Popen(cmd)
# time.sleep(1)
# proc.terminate()

sp.run(cmd)