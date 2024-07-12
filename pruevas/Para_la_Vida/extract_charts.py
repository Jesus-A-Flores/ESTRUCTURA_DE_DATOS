# Archivo: extract_charts.py
import xlwings as xw
import os

def extract_charts_from_excel(excel_file, output_dir='charts'):
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    app = xw.App(visible=False)
    wb = app.books.open(excel_file)
    sheet = wb.sheets[0]
    chart_images = []

    # Iterar sobre los gráficos de la hoja
    for i, chart in enumerate(sheet.charts):
        chart_name = f"chart_{i + 1}.png"
        chart_path = os.path.join(output_dir, chart_name)
        try:
            chart.to_png(chart_path)
            chart_images.append(chart_path)
        except Exception as e:
            print(f"Error al exportar el gráfico {chart_name}: {e}")

    wb.close()
    app.quit()

    return chart_images

if __name__ == "__main__":
    # Ejemplo de uso
    excel_file = 'ruta_al_archivo.xlsx'  # Reemplaza con la ruta correcta
    chart_images = extract_charts_from_excel(excel_file)
    print(f'Gráficos extraídos: {chart_images}')
