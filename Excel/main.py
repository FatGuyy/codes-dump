import requests
import Api_Key
import os


#Enter the terms you want to search in this list
#---------------------------------------------
searchs = ['minecraft', 'ghost', 'hero']
amount = int(input('Enter the amount of photos you want to download per topic'))
#---------------------------------------------


#Making Directories for the photos and if exists already skipping
for search in searchs:
    path = fr'.\{search}'
    if os.path.exists(path):
        continue
    os.mkdir(search)

#download function using given url
def download(down_url, i, dir_name):
    r = requests.get(down_url)
    with open(f'.\{dir_name}\{i}.png','wb') as f:
        f.write(r.content)

#Iterating the searchs and scrapping the reccieved data
for search in searchs:
    url = f'https://api.unsplash.com/search/photos?client_id={Api_Key.key}&per_page={amount}&query={search}'
    response = requests.get(url)
    #file_url = (list(list(list(list(res.json().items())[2][1])[0].values())[10].values())[0])
    for i in range(amount):
        file_url = (list(list(list(list(response.json().items())[2][1])[i].values())[10].values())[0])  #Link to download
        download(file_url, i, search)
