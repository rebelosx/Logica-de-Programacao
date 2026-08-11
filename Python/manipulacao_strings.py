#texto = "Python é incrível! "

#print("Texto original:", texto)

# strip
#print("strip():", texto.strip())

#print("strip():", texto.strip())


import requests

def fecht_data(endpoint, filters={}):
    url = f"https://rickandmortyapi.com/api/{endpoint}"
    response = requests.get(url, params=filters)

    return response.json()if response.status_code == 200 else None

characters = fecht_data("character", {'name': 'Rick'})

if characters:
    print(characters)
else:
    print('Failed to fetch data')