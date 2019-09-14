# Javascript 

### Bind e This
> Bind é utilizado quando temos um problema na quebra de paradigmas funcionais. Em suma, this é ultilizado para acessar dados em um deter,imado contexto. Quando teremos que acessar o this de forma externas e houver conflito, usaremos o bind.

```
const pessoa = {
  saudacao: 'Bom dia!',
  falar(){
    console.log(this.saudacao)
  }
}

pessoa.falar() // Assim  funcionará perfeitamente

const saudacaoDePessoa = pessoa.falar //Irá gerar um erro no entanto, vamos alterar

```
 > O certo seria: 
 
```
                ...
const saudacaoDePessoa = pessoa.falar.bind()
saudacaoDePesoa()

```
