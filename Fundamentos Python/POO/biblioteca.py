"""Sistema de empréstimo de livros"""

class Livro:
    def __init__(self,titulo, autor, exemplares, isbn, tema):
        self.titulo = titulo
        self.autor = autor
        self.exemplares = exemplares
        self.isbn = isbn
        self.tema = tema

    def cadastrar(self):
        self.titulo = str(input("Digite o título do livro: "))
        self.autor = str(input("Digite o autor do livro: "))
        self.exemplares = int(input("Digite quantos exemplares a obra tem disponível: "))
        self.isbn = int(input("Digite o ISBN da obra: "))
        self.tema = str(input("Digite o tema do livro: "))
        with open('banco_de_dados.txt', 'a', encoding='utf-8') as arquivo:
            arquivo.write(f"----------------------- \n{self.titulo}\n{self.autor}\n{self.exemplares}\n{self.isbn}\n{self.tema}-------------------")

    def emprestar(self, titulo):
        if self.titulo == True:
            if self.exemplares > 0:
                self.exemplares -= 1
                print("Livro emprestado com sucesso")
            else:
                print("Não há exemplares desse livro disponíveis.")
        else:
            print("Livro não encontrado")

    def historico(self):
        pass

class Usuario:
    def __init__(self, nome, id, telefone, e_mail, endereco):
        self.nome = nome
        self.id = id
        self.telefone = telefone
        self.e_mail = e_mail
        self.endereco = endereco

    def crud(self, entrada): #create, read, update, delete
        if entrada == "c":
            self.nome = str(input("Digite o nome do usuário: "))
            self.id = int(input("Digite o ID do usuário: "))
            self.telefone = int(input("Digite o telefone do usuário: "))
            self.e_mail = str(input("Digite o e-mail do usuário:"))
            self.endereco = input("Digite o endereço do usuário")
        elif entrada == "r":
        
        elif entrada == "u":
        
        elif entrada == "d":

class Emprestimo:
    def __init__(self, id, matricula_usuario, id_livro, data_retirada, data_devolucao_estimada, data_devolucao_real):
        self.id = id
        self.matricula_usuario = matricula_usuario
        self.id_livro = id_livro
        self.data_retirada = data_retirada
        self.data_devolucao_estimada = data_devolucao_estimada
        self.data_devolucao_real = data_devolucao_real
    
    def crud() #create, read, update, delete

    def calcular_multa()

#class Sistema:
#    def __init__(self):
# não faria sentido essa classe, já que poderiam se implementar
# todas os métodos nela
    