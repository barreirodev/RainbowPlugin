---

# Desarrollo de Imágenes en Unreal Engine con kAIros

## Links

[White Paper](https://docs.google.com/document/d/1D6_X6-fcu0jOLBRTdD9LhHJqMLjEklWp/edit?usp=sharing&ouid=108331310431866760033&rtpof=true&sd=true)
| [Vídeo Montaje de Nivel](https://drive.google.com/file/d/1I9H3KxQre6rdp33lyExN2z2391BsqH1a/view?usp=sharing)

## Requisito previo

- Descargar la carpeta coco_pretrained(https://drive.google.com/drive/folders/1DEN0nOx2-pNlzB-HDyGdQq1SVi-2U-Yk?usp=drive_link) y colocarla en la ruta `kAIros\ThirdParty\SPADE\checkpoints`

## Instalación en Unreal Engine

### 1. Integración de la Herramienta kAIros

- Crear la carpeta `Plugins` en la raíz del proyecto, pegar la carpeta de kAIros y regenerar la solución.

### 2. Encontrar kAIros dentro del Content Browser

- Localizar la carpeta `kAIros Content` en el Content Browser.

### 3. Localizar las Escenas

- Dentro de la carpeta `kAIros Content`, encontrarás dos escenas:
  - La carpeta `README` contiene una breve explicación sobre la utilización de la herramienta.
  - La carpeta `KAIrosDemo` contiene un nivel de prueba para familiarizarte rápidamente con kAIros. Dentro de él se ve como se han usado colores específicos que provienen de la carpeta Materials/Colours necesarios para su correcto funcionamiento.

### 4. Comenzar a Utilizar la Herramienta

- `EUW_Kairos` contiene la herramienta kAIros para generar nuevas imágenes con Unreal Engine.
- Para ejecutarla, haz clic derecho sobre el ícono correspondiente y selecciona `Run Editor Utility Widget`.

### 5. Utilización de kAIros

- Aparecerá una interfaz de kAIros con instrucciones para su uso.
- Puedes cambiar la configuración en esta pantalla. Cada vez que inicies kAIros, la configuración se restablecerá a los valores por defecto.
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

- Introduce el nombre del nuevo modelo en el archivo `CustomEditorUtilities.cpp`, reemplazando la línea 39 en la variable `ModelName` (`coco_pretrained`) por el nuevo nombre.
- Si se han añadido nuevos parámetros al modelo durante el entrenamiento, incorpóralos en la variable `ExtendedParameters` en la línea 44.

### 9. Errores Comunes

Durante la integración del plugin kAIros, podrían surgir varios errores que impidan el correcto funcionamiento de la herramienta. Algunos de los errores más comunes son:

- **Python no instalado:** La versión utilizada fue 3.12.2.
- **Uso de espacios en la ruta del proyecto:** Evita utilizar espacios en los nombres de las carpetas del proyecto.
- **Requerimientos de SPADE no instalados:** Ejecuta el siguiente comando en la ruta `kAIros\ThirdParty\SPADE`:
  ```bash
  pip install -r requirements.txt
  ```
- **Versión incorrecta de CUDA Toolkit:** Asegúrate de instalar la versión 12.1.
- **PyTorch incorrecto para CUDA Toolkit:** Instala la versión correcta con este comando:
  ```bash
  pip3 install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu121
  ```

Una vez resueltos estos problemas, reinicia el equipo para que la herramienta funcione correctamente. Es posible que surjan otros problemas no mencionados en este documento, pero hemos recopilado los más comunes para facilitar la integración del plugin.

--- 
