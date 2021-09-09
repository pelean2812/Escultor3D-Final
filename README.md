# Escultor3D Final

## Onde foi feito

Para desenvolver a interface, botões, funcionalidades e entre outras coisas, utilizou-se da IDE do QT Creator na qual oferece uma vasta variedade de ferramentas qe auxiliam a montar uma interfacie grafica.Para Baixar a IDE do QT Creator basta clicar [aqui](https://www.qt.io/download-open-source?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5).

## Abrir o Projeto

Para abrir o projeto é aconselhado estar na IDE do QTcreator, ao selecionar para abrir um projeto ja existente, navegar na pasta do programa e buscar pelo arquivo .pro

#### Possivel erro

Caso esteja faltando arquivos no headers e no source, terá de adicionar manualmente

## Interface

A interface criada no nosso projeto consiste em um canvas para visualizar o desenho que a pessoa faz utilizando o mouse ao pressionar sobre o canvas, existe a criação do espaço que vai ser trabalhado no projeto(o user vai selecionando no slidebar a quantidade desejada).A logica do slidebar é utilizado para varios itens como forma de selecionar um valor(cor e dimensões dos metodos dos itens nas ecultura.A tela que o usuario irá manusear é a seguinte:

![Tela do user]()

## Salvar arquivo

O save do arquivo é feito na abinha superior escrita file, quando selecionada abre as opções de salvar o arquivo ou de fechar(Quit).Quando o user clicar em save, receberá uma box com a mensagem de que o arquivo .off foi salvo com sucesso.O arquivo está sendo salvo com o nome de Escultura3D.off na pasta da biuld.Abrindo o arquivo num software que lê arquivos.off, no nosso caso foi o MeshLab, caso não tenha você pode baixar por [aqui](https://www.meshlab.net/#download).

![tela de save]()

Na imagem acima mostra a telinha para fazer o save

## Visualizando uma escultura qualquer

![escultura interfacie]()

Na figura acima temos um desenho qualquer no quadro de desenho, selecionamos um espaço e criamos uma figuira com alguns metodos.


![Escultura pronta]

Na figura acima temos a visualização da nossa escultura no MeshLab.
