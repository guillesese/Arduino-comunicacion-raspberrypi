import serial
arduino = serial.Serial('/dev/ttyACM0', 9600)
print("Starting!")
while True:
  comando = raw_input('Introduce comando:')
  arduino.write(comando)
  if(comando == 'H'):
    print ('LED ENCENDIDO')
  elif(comando == 'L'):
    print ('LED APAGADO')
  
arduino.close()
