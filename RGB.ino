/*
Talos Electronics
Rafael Lozano Rolón 
7/Septiembre/2015 
*/
int ledRojo = 2; //Declara Pin LED Rojo
int ledVerde=3; //Declara Pin LED Verde
int ledAzul=4;  //Declara Pin LED Azul

//————————————
//Funcion principal
//————————————
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
pinMode(ledRojo,OUTPUT);  //El LED Rojo como una salida
pinMode(ledVerde,OUTPUT); //El LED Verde como una salida
pinMode(ledAzul,OUTPUT);  //El LED Azul como una salida

}
//————————————
//Funcion color
//————————————

void color(int rojo,int verde,int azul){

//Escritura de PWM del color Rojo
analogWrite(ledRojo, 255-rojo);

//Escritura de PWM del color Verde
analogWrite(ledVerde, 255-verde);

//Escritura de PWM del color Azul
analogWrite(ledAzul, 255-azul);
}

//————————————
//Funcion ciclicla
//————————————
void loop() // Esta funcion se mantiene ejecutando
{           //  cuando este energizado el Arduino

// Llamado a la función Color que recibe
// 1er posicion: Intensidad Rojo
// 2da posición: Intensidad Verde
// 3ra posición: Intensidad Azul

color(0,255,255);     //Rojo
delay(1000);

color(255,0,255);     //Verde
delay(1000);

color(255,255,0);     //Azul
delay(1000);

color(0,0,0); //Blanco
delay(1000);

color(0,255,0);   //Magenta
delay(1000);

color(0,128,255);  //Naranaja
delay(1000);

}



