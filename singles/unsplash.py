import requests
import os

class Unsplash:
    def __init__(self,search_term,per_page=20,quality="thumb"):
        self.search_term = search_term
        self.per_page = per_page
        #self.page = 0
        self.quality = quality
        #self.headers = {"Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8", "Accept-Encoding": "gzip, deflate, br", "Accept-Language": "en-US,en;q=0.5", "Host": "unsplash.com", "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0"}
        self.headers ={"Accept": "*/*", "Accept-Encoding": "gzip, deflate, br", "Accept-Language": "en-US,en;q=0.5", "Connection": "keep-alive", "Host": "unsplash.com", "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:81.0) Gecko/20100101 Firefox/81.0"}
    

    def set_url(self):
        #return f"https://unsplash.com/napi/search/photos?query={self.search_term}&xp=&per_page={self.per_page}&page={self.page}"
        #https://unsplash.com/napi/search?query={self.search_term}&xp=feedback-loop-v2:control&per_page={self.per_page}
        return f"https://unsplash.com/napi/search?query={self.search_term}&per_page={self.per_page}"

    def make_request(self):
        url = self.set_url()
        return requests.request("GET",url,headers=self.headers)

    def get_data(self):
        self.data = self.make_request().json()

    def save_path(self,name):
        download_dir = "unsplash"
        if not os.path.exists(download_dir):
            os.mkdir(download_dir)
        return f"{os.path.join(os.path.realpath(os.getcwd()),download_dir,name)}.jpg"

    def download(self,url,name):
        filepath = self.save_path(name)
        with open(filepath,"wb") as f:
            f.write(requests.request("GET",url,headers=self.headers).content)

    def Scraper(self,pages):
        for page in range(0,pages+1):
            self.make_request()
            self.get_data()
            for item in self.data['photos']['results']:
                name = item['id']
                url = item['urls'][self.quality]
                print(url)
                self.download(url,name)
            #self.pages += 1

if __name__ == "__main__":
    scraper = Unsplash("baby")
    scraper.Scraper(1)