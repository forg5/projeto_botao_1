// C++ code
//

#define Pin_Botao 2
#define Pin_LED_Rosa 12
#define Pin_LED_Roxo 11
#define Pin_LED_Azul 10

int modo = 0; // Variável que seleciona o modo(0  
void setup()
{
pinMode(Pin_Botao, input);
pinMode(Pin_LED_Rosa, output);
pinMode(Pin_LED_Roxo, output);
pinMode(Pin_LED_Azul, output);
  
attachInterrupt(digitalPintToInterrupt(PIN_BOTAO), BotaoLigado, FALLING); 
// Permite que o botão interrompa o pino ligado}



void loop()
{

}