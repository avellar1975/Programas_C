/*Evandro Avellar*/

#define sensorUmidade A0 // Sensor de umidade de solo do módulo
const int ledPin = 13;
unsigned long tempoAnterior = 0; // Variável utilizada para guardar o tempo anterior
unsigned long intervalo = 60000; // Intervalo de tempo em MS para cada leituraa
int segundo,minuto, hora, dia, mes,ano;
unsigned long UtlTime;


void setup() {
  Serial.begin(9600); // Inicialização da comunicação serial
  pinMode(ledPin, OUTPUT);

//-------------------------------- Configurar Data Hora ------------------------------------------
UtlTime=0;
minuto=0;
hora=0;
dia=0;
mes=0;
ano=0;

Serial.print("\nEntre Minuto:");
  while(minuto==0){
    if (Serial.available() > 0){
    minuto= Serial.parseInt();
    }
  }

Serial.print("\nEntre Hora:");
  while(hora==0){
    if (Serial.available() > 0){
    hora= Serial.parseInt();
    }
  }

Serial.print("\nEntre Dia:");
  while(dia==0){
    if (Serial.available() > 0){
    dia= Serial.parseInt();
    }
  }

Serial.print("\nEntre Mes:");
  while(mes==0){
    if (Serial.available() > 0){
    mes= Serial.parseInt();
    }
  }

Serial.print("\nEntre ano:");
  while(ano==0){
    if (Serial.available() > 0){
      ano= Serial.parseInt();
    }
  }

//-------------------------------Fim Configurar Data Hora -----------------------------------------
 
}
void loop() {
  if(millis()-UtlTime<0){
    UtlTime=millis();
  }
  else{
    segundo=int((millis()-UtlTime)/1000);
  }

  if(segundo>59){
    segundo=0;
    minuto++;
    UtlTime=millis();

    if(minuto>59){
      hora++;
      minuto=0;
    
      if(hora>23){
        dia++;
        hora=0;
        
        if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
          if(dia>31){
            dia=1;
            mes++;
            
            if(mes>12){
              ano++;
              mes=1;
            }
          }
        }
        else if(mes==2){
          if(ano%400==0){
            if(dia>29){
              dia=1;
              mes++;
            }
          }
        else if((ano%4==0)&&(ano%100!=0)){
          if(dia>29){
            dia=1;
            mes++;
          }
        }
        else{
          if(dia>28){
            dia=1;
            mes++;
          }
        }
      }
      else{
        if(dia>30){
          dia=1;
          mes++;
        }
      }
  }
}
}
  
  unsigned long tempoAtual = millis(); // Realizamos a leitura atual do tempo em que o nosso Arduino Nano está ligado
  if (tempoAtual-tempoAnterior > intervalo){ // Pequena lógica para realizar leituras temporizadas sem parar o microcontrolador
      tempoAnterior = tempoAtual; // Guardamos o tempo anterior como o ultimo intervalo de tempo lido
      int leitura = analogRead(sensorUmidade); // Leitura dos dados analógicos vindos do sensor de umidade de solo

        Serial.print("\n Lendo o Sensor: ");
        Serial.print(leitura);
        Serial.print(" ");

Serial.print(dia); Serial.print("/"); Serial.print(mes); Serial.print("/"); Serial.print(ano); Serial.print(" "); Serial.print(hora); Serial.print(":"); Serial.print(minuto); Serial.print(":"); Serial.print(segundo);
//Serial.print("\n");


 
      if (leitura<=1023 && leitura>=682){ // Se a leitura feita for um valor entre 1023 e 682 podemos definir que o solo está com uma baixa condutividade, logo a planta deve ser regada
        Serial.print(" Status: ");
        Serial.println("Nível de Umidade Baixo");
        digitalWrite(ledPin, HIGH);
      }else{
        if (leitura<=681 && leitura>=341){ // Se a leitura feita for um valor entre 681 e 341 podemos definir que o solo está com um nível médio de umidade, logo dependendo da planta pode ou não ser vantajoso regar
        Serial.print(" Status: ");
        Serial.println("Nível de Umidade Médio");
        }
        else{
          if (leitura<=340 && leitura>=0){ // Se a leitura feita for um valor entre 0 e 340 podemos definir que o solo está com um nível aceitável de umidade, logo talvez não seja interessante regar neste momento
            Serial.print(" Status: ");
            Serial.println("Nível de Umidade Alto");
            
            
          }
        } 
      }
  }
}
