# nice!view Turtle

Based off the awesome [nice!view Elemental](https://github.com/kevinpastor/nice-view-elemental).

![image](https://github.com/user-attachments/assets/028748e0-e136-455f-9890-bcc7084297d4)

## Features

- Maximizes screen space. There are no margins on the screen, as the nice!view's borders gives some already.
- The layer text is right there in a large font, and it also lets you see your current layer path (up to 10 layers currently)
- The turtle from Google's Noto Emoji is there for the secondary display.

## Installation

In your `config/west.yml`:

```diff
manifest:
    remotes:
        - name: zmkfirmware
          url-base: https://github.com/zmkfirmware
+       - name: hf02
+         url-base: https://github.com/hf02
    projects:
        - name: zmk
          remote: zmkfirmware
          revision: main
          import: app/west.yml
+       - name: nice-view-turtle
+         remote: hf02
+         revision: main
```


In your `build.yaml`:

```diff
include:
  - board: nice_nano_v2
-   shield: whatever_left nice_view_adapter nice_view
+   shield: whatever_left nice_view_adapter nice_view_elemental
  - board: nice_nano_v2
-   shield: whatever_right nice_view_adapter nice_view
+   shield: whatever_right nice_view_adapter nice_view_elemental
```


## Todo
- Some nice_view_elemental -> nice_view_turtle. See [#2](https://github.com/hf02/nice-view-turtle/pull/2).
- Change the top bar icons from Elemental's style
- Notifications? For instance, if the keyboard disconnects, a banner will appear at the top so it's more obvious.
