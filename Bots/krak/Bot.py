import requests
from time import sleep
from random import randint
import multiprocessing
from config import authorization_token,channel_ids,message_sleep,add_random_sleep,messages_file_name

def send_messages(channel_id,message_sleep,add_random_sleep,filename,authorization_token):
    with open(filename,"r",encoding='utf8') as f:
        lines = f.readlines()
    for message in lines:
        sleep(message_sleep+randint(0,add_random_sleep))

        body={"content":message}
        headers = {'authorization':authorization_token}
        response = requests.post(f"https://discord.com/api/v8/channels/{channel_id}/messages",body,headers=headers)
        if(not (response.status_code==200)):
            print("message not delivered")
            print(response)

if __name__=='__main__':

    processes = []

    for channel_id in channel_ids:
        __args__ = [channel_id,message_sleep,add_random_sleep,messages_file_name,authorization_token]
        process = multiprocessing.Process(target=send_messages,args=__args__)
        process.start()
        processes.append(process)

    for process in processes:
        process.join()
