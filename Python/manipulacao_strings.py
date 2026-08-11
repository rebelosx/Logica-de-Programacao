lista = ["carro", True, 2, 3.5]
print(lista)
print(type(lista))
print("-"*30)

tupla = ("carro", True, 2, 3.5)
print(tupla)
print(type(tupla))
print("-"*30)

dicionario = {"nome": "carro", "logica": True, "numero": 2, "outroNumero": 3.5}
print(dicionario)
print(type(dicionario))
print("-"*30)

# caguei no mato
conjunto = {"carro", True, 2, 3.5}
print(conjunto)
print(type(conjunto))













''' import requests

def fecht_data(endpoint, filters={}):
    url = f"https://rickandmortyapi.com/api/{endpoint}"
    response = requests.get(url, params=filters)

    return response.json()if response.status_code == 200 else None

characters = fecht_data("character", {'name': 'Rick'})

if characters:
    print(characters)
else:
    print('Failed to fetch data')
    '''