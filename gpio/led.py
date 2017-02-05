import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.OUT)
GPIO.setup(13, GPIO.OUT)
for i in range(50):
    GPIO.output(13, True)
    GPIO.output(11, False)
    time.sleep(1)
    GPIO.output(13, False)
    GPIO.output(11, True)
    time.sleep(0.1)
GPIO.cleanup()
