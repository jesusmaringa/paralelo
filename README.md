# Paralelo

Probramar usando **millis()** sem a preocupação com os cálculos de tempo.

Baixe e use.

Instanciar paralelo sentando o tempo. 

**Paralelo p1 = Paralelo(valor_do_tempo);** 

No loop, monitorar a ação, que retorna true ou false.

  **if(p1.monitor()){**
  
        *Ação requerida no intervalo.*

  **}**


Caso precise ajustar o tempo ou trabalhar com o tempo dinâmico, dependendo de uma outra entrada como um potênciometro, ou outra ação qualquer, utilizar:

**p1.setTempo(valor_do_tempo);**

Se precisar visualizar o tempo utilize:

**p1.getTempo();**
