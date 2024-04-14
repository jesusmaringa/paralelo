# Paralelo

Probramar usando **millis()** sem a preocupação com os cálculos de tempo.

Baixe e use.

Instanciar paralelo sentando o tempo. 
&nbsp;

**Paralelo p1 = Paralelo(valor_do_tempo);** 
&nbsp;

No loop, monitorar a ação, que retorna true ou false.
&nbsp;
  **if(p1.monitor()){**
&nbsp;
        **//Ação requerida no intervalo.**
&nbsp;
  **}**
&nbsp;
Caso precise ajustar o tempo ou trabalhar com o tempo dinâmico, dependendo de uma outra entrada como um potênciometro, ou outra ação qualquer, utilizar:
&nbsp;
**p1.setTempo(valor_do_tempo);**
&nbsp;
Se precisar visualizar o tempo utilize:
&nbsp;
**p1.getTempo();**
