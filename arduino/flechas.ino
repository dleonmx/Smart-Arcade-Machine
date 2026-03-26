#include <Keyboard.h>
volatile int contador =0;
int i=0;
const int arriba=4;
const int abajo=6;
const int derecha=3;
const int izquierda=5;
const int boton_esp=8;
const int boton_apagar=10;
const int boton_cambio=9;
const int moneda=2;
void setup() { 
  pinMode(boton_cambio,INPUT_PULLUP);
pinMode(arriba,INPUT_PULLUP);
pinMode(abajo,INPUT_PULLUP);
pinMode(derecha,INPUT_PULLUP);
pinMode(izquierda,INPUT_PULLUP);
pinMode(moneda,INPUT_PULLUP);
pinMode(boton_esp,INPUT_PULLUP);
pinMode(boton_apagar,INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(moneda),cambia,RISING);
Keyboard.begin();
}

void loop() {
noInterrupts();
int lectura = contador;
interrupts();



if(digitalRead(boton_cambio)==0){
  Keyboard.press(KEY_ESC);
  delay(200);  
  Keyboard.releaseAll();
  Keyboard.write(' ');  // Envía la tecla espacio
  delay(1000);

  //cambio de juego
  if(i==0){
  Keyboard.print("mame mspacman -skip_gameinfo -rol");
  i++;
  }
  else if(i==1){
  Keyboard.print("mame digdug -skip_gameinfo -rol");
  i++;

  }
  else if(i==2){
  Keyboard.print("mame dkongo -skip_gameinfo -rol");
  i++;
  }
  else if(i==3){
  Keyboard.print("mame galaga -skip_gameinfo -rol");
  i++;
  }
    else if(i==4){
  Keyboard.print("mame asteroid -skip_gameinfo -rol");
  i=0;
  }
  Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();

}
   
//Apagado 
if(digitalRead(boton_apagar)==0){
  Keyboard.press(KEY_ESC);
  delay(200);  
  Keyboard.releaseAll();
  Keyboard.write(' ');  // Envía la tecla espacio
  delay(1000);
  Keyboard.print("sudo shutdown -h now");       
    Keyboard.press(KEY_RETURN); 
   Keyboard.releaseAll();         
}



//flechitas
if(digitalRead(derecha)==0){
  Keyboard.press(KEY_RIGHT_ARROW);                // Envía la tecla "1"
    delay(100);                         // Espera para evitar múltiples pulsaciones
    Keyboard.releaseAll();        

}
if(digitalRead(arriba)==0){
    Keyboard.press(KEY_UP_ARROW);                // Envía la tecla "1"
    delay(100);                         // Espera para evitar múltiples pulsaciones
    Keyboard.releaseAll();        

}
if(digitalRead(izquierda)==0){
    Keyboard.press(KEY_LEFT_ARROW);                // Envía la tecla "1"
    delay(100);                         // Espera para evitar múltiples pulsaciones
    Keyboard.releaseAll();        

}
if(digitalRead(abajo)==0){
    Keyboard.press(KEY_DOWN_ARROW);                // Envía la tecla "1"
    delay(100);                         // Espera para evitar múltiples pulsaciones
    Keyboard.releaseAll();
    }
if (contador>=2){
      Keyboard.press('5');                // Envía la tecla "1"
    delay(200);                         // Espera para evitar múltiples pulsaciones
    Keyboard.releaseAll(); 
    delay(1000);        
    Keyboard.press('1');                // Envía la tecla "1"
    delay(200);                         // Espera para evitar múltiples pulsaciones
    Keyboard.releaseAll(); 
    contador=0;
}
// control
if(digitalRead(boton_esp)==0){
  Keyboard.press(KEY_LEFT_CTRL);                // Envía la tecla "ctrl"
  delay(100);                         // Espera para evitar múltiples pulsaciones
  Keyboard.releaseAll();        
}

 
}
void cambia(){
    static unsigned long t0 = 0;
  unsigned long t1 = micros();
  if (t1 - t0 > 23000) {   // filtra pulsos menores de 5 ms
    contador++;
    t0 = t1;
  }
}





