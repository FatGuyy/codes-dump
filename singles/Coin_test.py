#Using api to fetch the data.
import os
from urllib import response
import requests
import constants, api_key
from pprint import pprint as pp

url = ' https://pro-api.coinmarketcap.com/v1/exchange/map'
headers = {
  'Accepts': 'application/json',
  'X-CMC_PRO_API_KEY': api_key.API_KEY,
}

search = "BTC"

#get the request and fetch the data
r = requests.get(url, headers=headers)
pp(r.json()['data']['slug'][search])


#Work with the data and get volume in a list


#use the matplotlib and display the graph.

