import csv
import time
import requests

def take_x_posts(x):
	'''Parses x posts from the VK group wall.'''
	token = 'dGFrZSB5b3VyIGhhbmRzIG9mZg=='
	version = 5.131
	domain = 'domain' # vk.com/domain
	count = 100
	offset = 0
	all_posts = []
	while offset < count:
		response = requests.get('https://api.vk.com/method/wall.get',
								params={
									'access_token': token,
									'v': version,
									'domain': domain,
									'count': count,
									'offset': offset
								})

		data = response.json()['response']['items']
		offset += 101
		all_posts.extend(data)
		time.sleep(30)
	return all_posts

all_posts = take_x_posts(200)

def file_writer(all_posts):
	with open('eden_parsing.csv', 'w') as file:
		a_pen = csv.writer(file)
		a_pen.writerow(('~~~TEST~~~'))
		for post in all_posts:
			a_pen.writerow((post['text']))
