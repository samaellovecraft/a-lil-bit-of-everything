import io

with io.open('path/to/result.txt', encoding='utf-8') as result:
	artworks = result.read().split('***')
	for artwork in artworks:
		if artwork == artworks[0]:
			Artwork.objects.create(title='***', content=artwork)
		else:
			Artwork.objects.create(title='***', content=artwork[1:])