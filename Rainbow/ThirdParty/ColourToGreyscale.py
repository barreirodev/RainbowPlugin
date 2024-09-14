from PIL import Image
import argparse
import os
import numpy as np

def ColorToLabel(r, g, b , colormap_path): 
    target_rgb = f"[{r},{g},{b}]"

    with open(colormap_path, 'r') as file:
        for line in file:
            index, rgb_value = line.strip().split(':')
            if rgb_value == target_rgb:
                return int(index)
    return 255

def ConvertToGreyscale(image_path, colormap_path):
    image = Image.open(image_path)
    image = image.convert('RGB') #remove alpha channel
    image_array = np.array(image)
    height, width, channels = image_array.shape
    label_image = np.zeros((height, width, channels), dtype=np.uint8)

    for y in range(height):
        for x in range(width):
            r,g,b = image_array[y,x]
            label_result = ColorToLabel(r,g,b,colormap_path)
            label_image[y,x] = [label_result,label_result,label_result]
    return label_image

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('input_label_path', type=str)
    parser.add_argument('input_inst_path', type=str)
    parser.add_argument('input_colormap_path', type=str)

    args = parser.parse_args()
    dest_dir = os.path.dirname(os.path.abspath(args.input_inst_path))
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    new_image = Image.fromarray(ConvertToGreyscale(args.input_label_path,args.input_colormap_path))
    new_image = new_image.convert('L')
    new_image.save(args.input_label_path)
    new_image.save(args.input_inst_path)

if __name__ == '__main__':
    main()