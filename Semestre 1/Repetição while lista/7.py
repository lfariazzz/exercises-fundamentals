valor_compra = 0
while True:
    numero_pedido = int(input("Insira o número do pedido: "))
    if numero_pedido == 0:
        break
    data_pedido = input("Insira data do pedido: ")
    preco_unitario = float(input("Insira o preço do pedido: "))
    quantidade = int(input("Quantos produtos vai comprar: "))
    soma_produto = preco_unitario * quantidade
    valor_compra += soma_produto
print(valor_compra)