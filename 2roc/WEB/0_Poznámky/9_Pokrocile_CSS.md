# Pokročilé CSS

## Zaoblovanie rohov (rounded corners)

1. Rovnaké pre všetky rohy objektu

    ```css
    border-radius: 20px;
    ```
2. Rôzny polomer horizontálneho a vertikálneho zaoblenia

    ```css
    border-radius: 20px/40px;
    ```

3. Rôzny polomer zaoblenia pre každý roh

    ```css
    border-top-left-radius: 40px;
    border-top-right-radius: 40px;
    border-bottom-left-radius: 40px;
    border-bottom-right-radius: 40px;

    border-radius: 40px 80px 60px 70px;
    ```

## Tiene pri objekte

```css
box-shadow: 3px 8px 0px 2px gray inset;
```
    posun doprava/dolava(+/-)
    posunn dole/hore(+/-)
    polomer rozostrenia
    rozptyl(vzdialenosť do kt. je tieň vrhnutý)
    farba tieňa
    tieň vrhnutý do objektu

- viac tienov na ten isty objekt sa oddeluje čiarkou


## Tiene pri texte
    
```css
text-shadow: ;
```

```css
text-shadow: 1px 1px 2px yellow;
```

    posun doprava/dolava(+/-)
    posun dole/hore(+/-)
    polomer rozostrenia
    farba pisma

## Farebný prechod

```css
background: gradient();
```

### lineárny gradient

```css
background: linear-gradient();
```
- prechod **JEDNÝM SMEROM** aj cez **VIAC FARIEB**
- smer môže byť top, left, bottom, right alebo vyjadrený uhlom
- default: top t.j. -90deg t.j. 270deg
- môže byť aj opakovaný: 
    ```css
    background: repeating-linear-gradient();
    ```

### radiálny prechod

```css
background: radial-gradient();
```
- defaul: tvar **elipsa**, veľkosť **najvzdialenejší roh**, pozicia **stredová**
- môže byť aj opakovaný:

    ```css
    repeating-radial-gradient
    ```

```css
background: radial-gradient(left top, red, green, blue);
background: radial-gradient(center, red, green, blue);
```