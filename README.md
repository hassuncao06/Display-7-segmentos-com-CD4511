# Display-7-segmentos-com-CD4511
Este código é baseado em registradores de porta, que nos permitem utilizar e manipular o microcontrolador do arduino de forma mais rápida, acessando 
diretamente os seus pinos, *IMPORTANTE* destacar que cada microcontrolador possui uma configuração diferente de suas portas, e o uso errado delas por meio
dos registradores pode acarretar em dano ao arduino, por este motivo a lógica desse cógido só funciona corretamente em arduinos que possuem o microcontrolador
ATmega328.
Nesse projeto foi implementado o uso do decodificador CD4511, que converte um sinal de entrada binário para um sinal de saída decimal, que é enviado ao display.

*Segue abaixo esquemático do circuito simulado pelo Tinkercad*

![Display-7-segmentos-com-CD4511 FOTO](https://user-images.githubusercontent.com/93269234/227261561-7c81435d-237b-4067-82d3-e93f5881494e.png)
