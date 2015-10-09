'Import some stuff'
import time
import sys

'define all functions'
def timep():
    print (time.asctime())
'define all classes'
class people:
    pass
class name(people):
    pass

'define all variables'


print ("Hello! This is a test python file!")
print ("The time right now is:")
timep()
print ("What is your name?")
username = sys.stdin.readline()
print ("Hello " + username)
print ("Do you want to regester you in the system? Y/N")
yesno = sys.stdin.readline()
if yesno == "Y":
    print ("OK")
    username = name()
else:
    print ("I won\'t add you")

