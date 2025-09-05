alert ('Bem vindo ao jogo do número secreto!');
let numeroSecreto = 5;
console.log (numeroSecreto)
let chute 
let tentativas = 1; 

//while: enquanto. if: se. alert: exibe uma mensagem. prompt: exibe uma caixa de diálogo. else: senão/ou. let: define um valor para a variavel.
while (chute != numeroSecreto) {
     chute = prompt ('escolha um número de 1 a 20');
     if (chute == numeroSecreto) {
        alert(`Isso aí! Voce descobriu o número secreto ${numeroSecreto} com ${tentativas} tentativas. `);
    } else {
        if (chute > numeroSecreto) {
            alert(`O número secreto é menor que ${chute}`)
        } else {
            alert(`O número secreto é maior que ${chute}`)
        }
        //tentativas = tentativas + 1
        tentativas++
    }
}

