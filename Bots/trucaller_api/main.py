import requests
import json
url = 'https://api4.truecaller.com/v1/apps/requests'
headers = {'content-type': 'application/json', 'appKey': APP_KEY}
data = {'phoneNumber': PHONE_NUMBER}
r = requests.post(url, headers=headers, data=json.dumps(data))