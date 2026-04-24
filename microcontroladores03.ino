// C++

//Pines de entrada
#define SW1 7
#define SW2 6
#define SW3 5
#define SW4 4
//Pines de salida
#define led1 13
#define led2 12


bool A,B,C,D;  //4 bits
byte entrada = 0; // 8 bits

// Configura el hardware
// Ejecuta una sola vez al energizar
void setup(){
  
  //pinMode(pin,in/out)
  
  //Pines de entradas
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT);
  
  //Pines de salida
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  
  Serial.begin(9600); // Set speed to 9600 bits per second

}

// Equivalente "main"
// Ejecuta en ciclo "infinito" --> Energizado
void loop(){

  
  
  // lectura de las entradas hardware
  A=digitalRead(SW1);
  B=digitalRead(SW2);
  C=digitalRead(SW3);
  D=digitalRead(SW4);
    
  // conversion de señales booleanas a un binario  
  bitWrite(entrada,3,A);
  bitWrite(entrada,2,B);
  bitWrite(entrada,1,C);
  bitWrite(entrada,0,D);
  delay(50);
  
  // conversion de binario a decimal
  // "entrada" variable tipo byte guardada como binario
  // No fue necesaria la conversión porque se editó cada bit de la variable
  
  /*
  Serial.print("Entrada bin: "); 
  Serial.println(entrada,BIN);      //Entrada en binario
  delay(500);
  Serial.print("Entrada dec: "); 
  Serial.println(entrada);      //Entrada en decimal
  delay(500);
  */
  
  // comparación <=5 ó >5
  // escribir salidas led1 y led2   
  if(entrada<=5){
    digitalWrite(led1,HIGH);
  	digitalWrite(led2,LOW);
  }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
  }
  
//delay(100);
}
