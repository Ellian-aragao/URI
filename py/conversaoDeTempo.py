seconds = int(input())

secondsfinal = seconds % 3600
hours = int((seconds - secondsfinal) / 3600)

secondsfinal = secondsfinal % 60
minutes = int((seconds - hours * 3600 - secondsfinal) / 60)

print('{}:{}:{}'.format(hours, minutes, secondsfinal))
