# detach
Simple utility to start a program detached from the current terminal session.

## Attention
Don't ever set the SUID-flag on the resulting executable. This will enable every
user to run programs as your user (worst case: root), without authentication.
