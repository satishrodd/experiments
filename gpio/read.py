import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM) 
GPIO.setup(4, GPIO.IN, pull_up_down=GPIO.PUD_UP)
while True:
    input = GPIO.input(4)
    if (input == False ): 
        print "Button Pressed"
time.sleep(300)


