from  whatsapp import Client
import sys

ph = '918123588309'
ph1 = '919900025972'

client = Client(login='917892051399', password='4Ey0YZo2fb0xxuaNfmmu65Lz4w0=')

# pass the phone number and the message to be sent as arguments.
client.send_message(ph, sys.argv[1])
