import serial
import time
import sys

arduino = serial.Serial('COM20',9600)

while(True):
    command = input("Scrie propozitia\n")
    arduino.write(command.encode())    # encode-pentru propozitii pentru care nu stiu lungimea
 