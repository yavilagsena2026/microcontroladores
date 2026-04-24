// C++
int A,B,C,D,entrada;  //80 bits (10 bytes)

// Configura el hardware
// Ejecuta una sola vez al energizar
void setup(){
  
  //pinMode(pin,in/out)
  
  //Pines de entradas
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  
  //Pines de salida
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  
  Serial.begin(9600); // Set speed to 9600 bits per second

}

// Equivalente "main"
// Ejecuta en ciclo "infinito" --> Energizado
void loop(){
  
  // lectura de las entradas hardware
  A=digitalRead(7);
  B=digitalRead(6);
  C=digitalRead(5);
  D=digitalRead(4);
    


  // conversion de binario a decimal
  entrada=A*8+B*4+C*2+D*1;
  
  
  
  // "entrada" variable tipo byte guardada como binario
  // No fue necesaria la conversión porque se editó cada bit de la variable
  
  Serial.print("Entrada bin: "); 
  Serial.println(entrada,BIN);      //Entrada en binario
  delay(500);
  Serial.print("Entrada dec: "); 
  Serial.println(entrada);      //Entrada en decimal
  delay(500);
   
  
  // comparación <=5 ó >5
  // escribir salidas led1 y led2   
  if(entrada<=5){
    digitalWrite(13,HIGH);
  	digitalWrite(12,LOW);
  }else{
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
  }
  
//delay(100);
}
