# Desafio 01 - Travessia Segura :traffic_light: 

## Contexto :thought_balloon:

Em frente à nossa escola foi inaugurada uma nova avenida com intenso fluxo de veículos. Para garantir a segurança dos alunos e de todos que precisam atravessar, você e seu grupo foram encarregados de projetar um sistema automático.

## Solução :heavy_check_mark:

Crie um Sistema de semáforo. Esse sistema deve controlar o tráfego de veículos e pedestres, alterando de maneira eficiente e segura os sinais vermelho, amarelo e verde.

## Instruções para montagem :triangular_flag_on_post:

As instruções informadas aqui são os passos iniciais para resolução do problema, não se limite a realizar apenas as instruções contidas nesse manual, recomenda-se a confecção estética através dos materiais recicláveis ou de apoio.

### Materiais necessários (mínimos) :scroll:

- 1 Protoboard (Conheça mais da protoboard aqui) 

<img src="midia/iot/protoboard/media.png" alt="Protoboard" height="250">

- 3 Led's de cores Verde, Amarelo e Vermelho (Conheça mais sobre Led aqui)

<img src="midia/iot/diversos/led-vermelho.png" alt="Led de cor vermelha" height="250">

- 3 Resistores

<img src="midia/iot/diversos/resistor.png" alt="Descrição da imagem" height="250">  

- 1 Microcontrolador ESP32 (Conheça mais sobre ESP32 aqui)

<img src="midia/iot/microcontrolador/esp32.png" alt="ESP32" height="250">

- Jumper

<img src="midia/iot/diversos/jumper-machoxmacho.png" alt="Descrição da imagem" height="250"> 


### Mãos na obra :hammer:

As instruções repassadas nesse manual terão uma pespectiva final semelhante a animação abaixo:

<img src="midia/desafio/01/animacao.gif" alt="Projeto final" height="250">

Para isso vamos montar peça por peça.

**Passo 01** : Conecte os leds na protoboard a ponto de deixar espaço suficiente para o jumpers que entraram pelo lado do ESP32 e dos resistores.

<img src="midia/desafio/01/passo1.jpg" alt="Projeto final" height="250"> 

**Passo 02** : Encaixe os resistores no perna mais curta de cada led e encaixe cada um dos resistores na linha neutro (GND) da protoboard (-).

<img src="midia/desafio/01/passo2.jpg" alt="Projeto final" height="250"> 

**Passo 03** : Encaixe o ESP32 (busque o ESP32 que tenha escrito em papel 01 em sua face traseira, pois ele esta pré-programado) em uma posição que não atrapalhe o led, recomendamos na outra fileira dos leds, neste momento só é necessário encaixar uma parte do ESP32, a outra parte pode ficar exposta para fora, evite encaixar o ESP32 na fileira reserva para o fase e neutro (GND) da protoboard.

<img src="midia/desafio/01/passo3.jpg" alt="Projeto final" height="250"> 

**Passo 04** : Na placa ESP32 busque a fileira referente ao GND (neutro) e faça a ligação dele para a fileira reserva para o linha neuto (-).

<img src="midia/desafio/01/passo4.jpg" alt="Projeto final" height="250"> 

**Passo 05** : Conecte os fios na entrada de acordo com as instruções
  - Saída D21 ligando o positivo (perna maior) do Led vermelho
  - Saída D19 ligando o positivo (perna maior) do Led amarelo
  - Saída D5 ligando o positivo (perna maior) do Led verde

<img src="midia/desafio/01/passo5.jpg" alt="Projeto final" height="250"> 

**Passo 06** : Realizado todos os passos corretamente, solicite a avaliação de um dos monitores da oficina para rever se a solução foi aplicada corretamente e testar em uma fonte de energia.

**Passo 07** : Confirmado que a solução esta funcionando, agora realize, com o material de apoio e descartáveis, uma solução estética mais agradável para o seu desafio. O grupo que entreguar o melhor projeto ganhará um brinde :gift:.

<img src="https://i.ytimg.com/vi/3KcG4L928-Y/maxresdefault.jpg" alt="cenário exemplo" height="250">

_Imagens ilustrativa par aguçar sua criatividade_

[Clique aqui caso deseje conferir o código fonte pré-programado dessa solução.](midia/desafio/01/codigo_fonte.ino)

  
