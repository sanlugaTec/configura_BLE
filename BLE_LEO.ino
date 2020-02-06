void setup()
   { Serial.begin(9600);
     Serial.println("Enter AT commands:"); //Desbloquear esta lína para cambiar de nombre a los módulos bluetooth
     Serial1.begin(9600);
   }

void loop()
   {  if (Serial1.available()) // Detecta si hay datos en el bluetooth
          Serial.write(Serial1.read());  //Escribe en el Puerto de la computadora lo encontrado

      if (Serial.available()) //Detecta si hay datos en el Puerto de la computadora
         { char c = Serial.read() ;
           Serial.print(c); //Escribe lo mismo que detectó en el puerto de la computadora para checar que esté bien
           Serial1.print(c);//Escribe el mensaje que detectó en la computadora en el puerto del bluetooth.
         }
   }
