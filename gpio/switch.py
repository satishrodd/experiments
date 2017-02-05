import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setup(4, GPIO.IN, pull_up_down=GPIO.PUD_UP)
def buttonPress(channel):
    print "button pressed"
GPIO.add_event_detect(4, GPIO.RISING, callback=buttonPress, bouncetime=300)

while True:
    time.sleep (300)
GPIO.cleanup	
