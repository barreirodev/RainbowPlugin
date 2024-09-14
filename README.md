---

# Desarrollo de Imágenes en Unreal Engine con Rainbow

## Links

[White Paper](https://drive.google.com/file/d/11Sefnpb76ci5WhjF5niEQ7aENXRuNTnA/view?usp=sharing)
| [Vídeo Montaje de Nivel](https://drive.google.com/file/d/1sZylTRO6MfBr9T1_1lcPJihAl051Yr-c/view?usp=sharing)

## Requisitos previos

- Descargar la carpeta [checkpoints](https://drive.google.com/file/d/1EexTB_Ptul2WW0sg5_TOLgo4_96httSF/view?usp=drive_link), descomprimirla y colocarla en la ruta `Rainbow\ThirdParty\SPADE`
- Instalar Python versión 3.12.2.
- Evita utilizar espacios en los nombres de las carpetas del proyecto.
- Ejecutar el siguiente comando en la ruta `Rainbow\ThirdParty\SPADE`:
  ```bash
  pip install -r requirements.txt
  ```
- Instalar CUDA Toolkit versión 12.1. Se necesita una tarjeta gráfica de NVIDIA.
- Instalar PyTorch para CUDA Toolkit con este comando:
  ```bash
  pip3 install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu121
  ```
Reiniciar el equipo para que la herramienta funcione correctamente.

## Instalación en Unreal Engine

### 1. Integración de la Herramienta Rainbow

- Crear la carpeta `Plugins` en la raíz del proyecto y pegar la carpeta de Rainbow. Regenerar la solución si fuera necesario.

### 2. Encontrar Rainbow dentro del Content Browser

- Localizar la carpeta `Rainbow Content` en el Content Browser.

### 3. Localizar las Escenas

- Dentro de la carpeta `Rainbow Content`, encontrarás dos escenas:
  - La carpeta `README` contiene una breve explicación sobre la utilización de la herramienta.
  - La carpeta `RainbowDemo` contiene un nivel de prueba para familiarizarte rápidamente con Rainbow. Dentro de él se ve como se han usado colores específicos que provienen de la carpeta Materials/Colours necesarios para su correcto funcionamiento.

### 4. Comenzar a Utilizar la Herramienta

- `EUW_Rainbow` contiene la herramienta Rainbow para generar nuevas imágenes con Unreal Engine.
- Para ejecutarla, haz clic derecho sobre el ícono correspondiente y selecciona `Run Editor Utility Widget`.

### 5. Utilización de Rainbow

- Aparecerá una interfaz de Rainbow con instrucciones para su uso.
- Puedes cambiar la configuración en esta pantalla. Cada vez que inicies Rainbow, la configuración se restablecerá a los valores por defecto.
- Una vez ajustada la configuración, y diseñado un nivel con los colores específicos presiona el botón `Start` para utilizar la herramienta.

### 6. Generación de Imágenes

- Las imágenes necesarias para SPADE se generan automáticamente desde Unreal Engine.
- Las capturas se procesan en Python para etiquetar cada píxel y convertirlo a escala de grises. Las imágenes procesadas se guardan en la carpeta de val correspondiente para que SPADE las procese.

### 7. Entrenamiento de un Modelo Propio
El plugin viene con un modelo preentrenado de Coco-Stuff no pudiendo modificar sus parámetros. Aun así, se puede entrenar un modelo propio con diferentes características siguiendo las siguientes instrucciones:
- Crea una nueva carpeta dentro de `ThirdParty/SPADE/datasets` en el proyecto de Unreal Engine.
- La estructura de carpetas debe ser:
  - `train_img` (imágenes en color)
  - `train_label` y `train_inst` (imágenes en escala de grises)
- Para entrenar el modelo, utiliza el siguiente comando en la terminal:
  ```bash
  python train.py --name nombre_experimento --dataset_mode tipo_de_base_de_datos --dataroot datasets/nombre_carpeta_imagenes
  ```
- Comandos adicionales:
  - `--no_instance`: Indica que no existe un mapa de instancias.
  - `--use_vae`: Genera imágenes con un nuevo estilo cada vez.
  - Para ver otros comandos, ejecuta: `python train.py --help`.
- Después de varias iteraciones, los datos se guardarán en la carpeta correspondiente dentro de `checkpoints`.

### 8. Requisitos Necesarios para la Utilización de un Modelo Propio

- Introduce el nombre del nuevo modelo en el archivo `CustomEditorUtilities.cpp`, reemplazando la [línea 135](https://github.com/barreirodev/RainbowPlugin/blob/main/Rainbow/Source/RainbowEditor/Private/CustomEditorUtilities.cpp#L135) en la variable `ModelName` (`coco_pretrained`) por el nuevo nombre.
- Si se han añadido nuevos parámetros al modelo durante el entrenamiento, incorpóralos en la variable `ExtendedParameters` en la [línea 140](https://github.com/barreirodev/RainbowPlugin/blob/main/Rainbow/Source/RainbowEditor/Private/CustomEditorUtilities.cpp#L140).
  
--- 
