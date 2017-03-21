from gpiozero import buzzer
from time import sleep
buzzer=buzzer(17)
while true:
    buzzer.on()
    sleep(1)
    buzzer.off()
    sleep(1)
    
