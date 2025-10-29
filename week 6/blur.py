from PIL import Image,ImageFilter
before=Image.open("tower.bmp")
after=before.filter(ImageFilter.BoxBlur(3))
after. save("out.bmp")
