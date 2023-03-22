void setup(){
  DDRD = 0b11110000;// seta os pinos 7,6,5 e 4 como saídas
}
void loop(){
  PORTD = 0;// envia 0000 para o decodificador pelas saídas utilizadas
  delay(1000);
  for(int i = 0; i<=8;i++){// conta de 0 a 8
  PORTD = PORTD+16;//envia um sinal decimal que é convertido em binário pelo arduino para o decodificador
  delay(1000);
  }
  for(int i = 8; i>=1;i--){//conta de 8 a 1
  PORTD = PORTD-16;
  delay(1000);
  }
}
