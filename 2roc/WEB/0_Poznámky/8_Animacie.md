# Animacie
- ummožňujú aby sa prvok postupne zmenil z jedného štýlu na druhý
- patria medzi rozšírené vlastnosti css

## CSS animations
1. animáciu si najskôr nadefinujeme pomocou pravidla `@keyframes`
    - animacia sa v určitých časoch zmení z aktuálneho štýlu na iný
```css
@keyframes meno_animacie {
    from {deklarácia vlastností}
    to {deklarácia vlastností}
}
```
- aby animacia fungovala musime ju naviazat na nejaky element
- povinne vlastnosti
```css
p {
    animation-name: meno;
    animation-duration: ;
}
```
### Vlastnosti
- animation-name - nazov animacie
- animation-duration - trvanie animacie
- animation-timing-function - určuje rýchlostnú krivku animácie
    ```css
    animation-timing-function: linear;
    animation-timing-function: cubic-bezier;
    animation-timing-function: ease;
    animation-timing-function: ease-in;
    animation-timing-function: ease-out;
    animation-timing-function: ease-in-out;
    ```
- animation-delay - oneskorenie štartu
- animation-iteration-count - kolko krat sa animacia vykona
    ```css
    animation-iteration-count: 1;
    animation-iteration-count: infinite;
    ```
- animation-direction
    ```css
    animation-direction: normal;
    animation-direction: reverse;
    animation-direction: alternate;
    animation-direction: alternate-reverse;
    ```
- animation-fill-mode - udava stav pred a po animacii
- animation-play-state - ci je animacia spustena alebo pozastavena

#### skrátený zápis
- doležité je poradie, nepoužitá vlastnosť sa vynecha
```css
animation: semafor 10s linear 3s infinite normal;
```

## css tansitions
- umoznuju vytvorit jednoduche efekty ako: hover
1. špecifikujeme css vlastnosť
2. špecifikujeme trvanie efektu
```css
transition: width 2s;
```
### vlastnosti
- transition-delay
- transition-duration
- transition-property
- transition-timing-function

## transmisions + transformacie
1. scale - zvacenie/zmensenie elementu
2. rotate - natocenie elementu
3. translate - pohyb elementu
4. skew - skosenie