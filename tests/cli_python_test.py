# Python CLI OpenCV 4 test
import cv2

print("OpenCV version:")
print(cv2.__version__)

img = cv2.imread("lake.jpg")
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

cv2.imwrite("lake_gray.jpg", gray)
