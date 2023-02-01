import json 
import io

with io.open('file.json', encoding='utf-8') as file:
		new_file = json.load(file)
		items = new_file['response']['items']
		items = sorted(items, key=lambda k: k['date'])
		with io.open('result.txt', 'a', encoding='utf-8') as result:
			for item in items:
				result.write(item['text'].replace("garbage value to replace", ''))
				result.write('\n***\n')