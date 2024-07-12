def figura(pieza,fig,angulo):
    mat = []
    match pieza:
        case 'J':
            if angulo == 90:
                mat = [[f'{fig}',f'{fig}',f'{fig}'],[' ',' ',f'{fig}']]
            else:
                mat = [[' ',f'{fig}'],[' ',f'{fig}'],[f'{fig}',f'{fig}']]
        case 'L':
            if angulo == 90:
                mat = [[' ',' ',f'{fig}'],[f'{fig}',f'{fig}',f'{fig}']]
            else:
                mat = [[f'{fig}',' '],[f'{fig}',' '],[f'{fig}',f'{fig}']]
        case 'O':
            mat = [[f'{fig}',f'{fig}'],[f'{fig}',f'{fig}']]
        case 'I':
            if angulo == 90 or angulo == 270:
                mat = [f'{fig}',f'{fig}',f'{fig}',f'{fig}']
            else:
                mat = [[f'{fig}'],[f'{fig}'],[f'{fig}'],[f'{fig}']]
    for i in mat if angulo != 90 or angulo != 270 else print(*mat):
        print(*i)

fig = input()

angulo = int(input())

tipo_pieza = input()

figura(tipo_pieza,fig,angulo)