#!/user/bin/python3

def safe_print_integer(output):
    try:
        print ('{:d}'.format(output))
        return True
    except (TypeError, ValueError):
        return False
